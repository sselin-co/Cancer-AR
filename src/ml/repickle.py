import torch

checkpoint = torch.load("./model/classifier.ckpt")
torch.save(checkpoint['state_dict'], "./model/classifierState.ckpt")

checkpoint = torch.load("./model/detector.ckpt")
torch.save(checkpoint['state_dict'], "./model/detectorState.ckpt")
