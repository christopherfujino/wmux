vars = {
    'clang_version': 'git_revision:020d2fb7711d70e296f19d83565f8d93d2cfda71',
    }

deps = {
    'third_party/clang': {
      'packages': [
        {
          # TODO make this platform
          'package': 'fuchsia/third_party/clang/windows-amd64',
          'version': Var('clang_version'),
          },
        ],
        'dep_type': 'cipd',
      },
    }

# vim: set ft=python shiftwidth=2 tabstop=2 :
