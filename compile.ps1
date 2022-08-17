$binExists = Test-Path -Path "./bin"

if(!$binExists){
    New-Item -Path "." -Name "bin" -ItemType "directory"
}

Remove-Item -Path "./bin/*.*"

cd ./bin

$folder__path = ".."

$files = Get-ChildItem $folder__path -Recurse


foreach ($f in $files){
    If($f.FullName -match ".+\.cpp") 
    {
        g++ -c $f.FullName
    }
}

$folder__path = "."

$files = Get-ChildItem $folder__path -Recurse

$texte = ""

foreach ($f in $files){
    If($f.FullName -match ".+\.o") 
    {
        $texte += " "
        $texte += $f.FullName
    }
}

If($texte.length -ne 0)  
{
    $Command = 'g++ ' + $texte + ' -o main.exe'
    Invoke-Expression $Command
}

cd ..