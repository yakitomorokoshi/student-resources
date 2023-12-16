To set a new config/them with [**Oh My Posh**](https://github.com/jandedobbeleer/oh-my-posh "") on shell
+ [PowerShell](#powershell)
+ [Bash](#bash)

# PowerShell <a id="powershell"></a>

This is my `Microsoft.PowerShell_profile` file on `$PROFILE` to set a new config/theme

```ps1
<#

To set a new config/theme:

    oh-my-posh init pwsh --config '<point it to the location of a predefined theme or custom configuration>' | Invoke-Expression

To set a new config/theme with a URL pointing to a remote config:

    oh-my-posh init pwsh --config '<a URL pointing to a remote config>' | Invoke-Expression

To set a new config/theme with a path to a local configuration file:

    oh-my-posh init pwsh --config '<a path to a local configuration file>' | Invoke-Expression

For example, to use the [yakito-zero] theme with a URL pointing to a remote config:

    oh-my-posh init pwsh --config 'https://raw.githubusercontent.com/yakitomorokoshi/student-resources/master/project/oh-my-posh/themes/yakito-zero.omp.json' | Invoke-Expression

#>

# ==========================
# VIRTUAL_ENV_DISABLE_PROMPT
# ==========================

$env:VIRTUAL_ENV_DISABLE_PROMPT=1

# ===========
# Git Aliases
#============

Remove-Alias -Name gi -Force

Remove-Alias -Name gc -Force

Remove-Alias -Name gp -Force
Remove-Alias -Name gl -Force

function Get-GitInit{& git init $args}
New-Alias -Name gi -Value Get-GitInit

function Get-Status{& git status $args}
New-Alias -Name gs -Value Get-Status

function Get-GitAdd{& git add $args}
New-Alias -Name ga -Value Get-GitAdd

function Get-GitCommit{& git commit $args}
New-Alias -Name gc -Value Get-GitCommit

function Get-GitPush{& git push $args}
New-Alias -Name gp -Value Get-GitPush

function Get-GitLog{& git log $args}
New-Alias -Name gl -Value Get-GitLog

```

# Bash <a id="bash"></a>

This is my `~/.bashrc` to set a new config/theme

```bash

# To set a new config/theme:

#     eval "$(oh-my-posh init bash --config <point it to the location of a predefined theme or custom configuration>)"

# To set a new config/theme with a URL pointing to a remote config:

#     eval "$(oh-my-posh init bash --config <a URL pointing to a remote config>)"

# To set a new config/theme with a path to a local configuration file:

#     eval "$(oh-my-posh init bash --config <a path to a local configuration file>)"

# For example, to use the [yakito-zero] theme with a URL pointing to a remote config:

#     eval "$(oh-my-posh init bash --config https://raw.githubusercontent.com/yakitomorokoshi/student-resources/master/project/oh-my-posh/themes/yakito-zero.omp.json)"


# ===========
# Git Aliases
#============

alias gi='git init'

alias gs='git status'
alias ga='git add'
alias gc='git commit'

alias gp='git push'
alias gl='git log'

```