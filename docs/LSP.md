# AGS Language Server

A Language Server Protocol implementation for AGS (Association of Geotechnical and Geoenvironmental Specialists) files.

## Features

- Syntax validation
- Auto-completion for AGS field names and data types
- Hover information for field definitions
- Diagnostic messages for format violations
- Go-to-definition for group references

## Installation

```bash
npm install -g ags-language-server
```

## Usage

Configure your editor to use the AGS language server for `.ags` files.

### VS Code

Add to your `settings.json`:

```json
{
  "languageServerExample.maxNumberOfProblems": 100,
  "languageServerExample.trace.server": "verbose"
}
```

### Neovim

```lua
require'lspconfig'.ags_ls.setup{}
```

## Configuration

The language server can be configured with:

- AGS version validation (AGS3, AGS4)
- Custom field validation rules
- Data type checking
- Cross-reference validation