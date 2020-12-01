# dwmblocks
Modular status bar for dwm written in c.

# Modifying dwmblocks
The statusbar is made from text output from scripts found in my [.config/dwmblocks/scripts](https://github.com/magicmonty/dotfiles_dotbot/tree/master/apps/dwmblocks/scripts).  Blocks are added and removed by editing the blocks.h header file.

# To get my dwmblocks to work for you...
You will, of course, need my dwmblocks build and my scripts in [.config/dwmblocks/scripts](https://gitlab.com/dwt1/dotfiles/-/tree/master/.local/bin).  Make sure that .local/bin is in your $PATH otherwise you can't call those scripts by name which is what I'm doing in blocks.h.  Instead, you'd have to write out the full path to each script in the blocks.h.

