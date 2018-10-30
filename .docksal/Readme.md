# Docksal powered environment

## Setup instructions

### Step 1: Docksal environment setup

**This is a one time setup - skip this if you already have a working Docksal environment.**  

Follow [Docksal environment setup instructions](http://docksal.readthedocs.io/en/master/getting-started/env-setup)

```
curl -fsSL https://get.docksal.io | sh
```
   
### Step 2: Project setup

1. Clone this repo into your Projects directory

    ```
    git clone GIT_URL
    cd PROJECT_FOLDER
    ```
    
2. Create file `.docksal/docksal-local.env` with the following content:

   ```
   DUMP_USER="dummy_username"
   DUMP_PASS="dummy_password"
   ```

Put real username and password for database dump there.

3. Initialize the site

    This will initialize local settings and install the site via drush

    ```
    fin vm start
    fin init
    ```

4. **On Windows** add `192.168.64.100  leapingbunny.docksal` to your hosts file

5. Point your browser to [http://leapingbunny.docksal](http://leapingbunny.docksal)

### Useful commands ###

#### Run database updates

```
cd drupal
fin exec "drush updb"
```

Docksal [fin documentation](http://docksal.readthedocs.io/en/master/fin/fin/)

`fin bash` (or `fin bash cli`) logs you into the **cli** container - for drush, drupal console etc, although you can use `fin drush ...` and `fin exec ...`

`fin bash db` logs you into the db container, useful if you want to do something with MySQL

`fin bash web` logs you into the web container, if you need to check apache configuration etc

## More automation with 'fin init'

Site provisioning can be automated using `fin init`, which calls the shell script in [.docksal/commands/init](.docksal/commands/init).  
This script is meant to be modified per project.

Some common tasks that can be handled in the `init` command:

- initialize local settings files for Docker Compose, Drupal, etc.
- import DB or perform site install
- compile Sass
- run DB updates, revert features, clear caches, etc.
- enable/disable modules, update variables values

Do not run any tests in `init` command, use a separate one (see `test` script `/.docksal/commands/test`)