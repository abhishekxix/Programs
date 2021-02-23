from django.urls import path
from . import views #or you can type from . import views

urlpatterns = [
    path('', views.index, name = 'index'),
]