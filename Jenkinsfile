pipeline {
    agent any

    stages {

        stage('Clone Repository') {
            steps {
                echo "Cloning repository..."
            }
        }

        stage('Build Docker Image') {
            steps {
                sh 'docker build  --no-cache -t backend-image ./backend'
            }
        }

        stage('Stop Old Container') {
            steps {
                sh 'docker stop backend || true'
                sh 'docker rm backend || true'
            }
        }

        stage('Run New Container') {
            steps {
                sh 'docker run -d --name backend backend-image'
            }
        }
    }

    post {
        success {
            echo "Pipeline executed successfully!"
        }
        failure {
            echo "Pipeline failed!"
        }
    }
}
