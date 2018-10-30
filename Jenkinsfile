pipeline {
  agent {
    node {
      label 'leapingbunny'
      customWorkspace 'builds/leapingbunny/leapingbunny-' + env.BRANCH_NAME  + '-' + env.BUILD_NUMBER
    }
  }
  
  environment {
    DB_DATA_VOLUME = "/home/jslave/dumps/leapingbunny/leapingbunny-db-data-volume-sm.tar.gz"
    VIRTUAL_HOST = "${BUILD_NUMBER}.${BRANCH_NAME.toLowerCase()}.leapingbunny.${VIRTUAL_HOST_BASE}"
  }
  
  stages {
    stage('build') {
      steps {
        sh 'fin init'
        echo 'http://' + VIRTUAL_HOST + '/'
      }
    }
    stage('test') {
      steps {
        sh 'fin test'
      }
    }
  }
}