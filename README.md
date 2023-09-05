## Development Dependencies

* [depot_tools](https://commondatastorage.googleapis.com/chrome-infra-docs/flat/depot_tools/docs/html/depot_tools_tutorial.html#_setting_up)

## Cloning

Create a new directory, with a file named `.gclient`:

```
solutions = [
  {
    "managed": False,
    "name": "repo",
    "custom_deps": {},
    "deps_file": "DEPS",
    "safesync_url": "",
    "url": "git@github.com:christopherfujino/wmux.git",
  }
]
```

Now run `gclient sync` in this directory.

## Building

From a powershell prompt, run:

```
# Generate Ninja build files
.\configure.ps1
cd build

# Build
..\..\third_party\ninja\ninja.exe
```
