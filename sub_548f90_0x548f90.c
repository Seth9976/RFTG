// 函数名称: sub_548f90
// 虚拟地址: 0x548f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_548f90(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x350)
    int32_t* esi = *(arg1 + 0x350)
    char** eax = *esi
    
    if (eax != esi[0x10b])
        sub_4c5870("pVertexShader->assetShader == pPixelShader->assetShader", &data_83f3d3, 
            "OpenGLGraphics.cpp", 0x1003, "OpenGLInterface::GraphicsMaterialSetup")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_2 = sub_54c6a0(eax)
    
    if (eax_2 == 0)
        eax_2.b = 0
        return eax_2
    
    int32_t edx = sub_543ee0(eax_2)
    int32_t edx_1 = sub_547c60(esi[0x10c], edx, &esi[0x10d], arg1)
    int32_t var_14_1 = esi[0x216]
    sub_548800(&esi[0x219], edx_1)
    int32_t eax_6
    eax_6.b = 1
    return eax_6
}
