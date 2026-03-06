// 函数名称: sub_54a110
// 虚拟地址: 0x54a110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_54a110(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax = sub_54b850(arg1 + 0x4240, arg2)
    int32_t* eax = sub_54b850(arg1 + 0x4240, arg2)
    
    if (arg3 s< 0 || arg3 s> eax[2])
        sub_4c5870("bytesUsed >= 0 && bytesUsed <= bufferData->mBufferSize", &data_83f3d3, 
            "OpenGLGraphics.cpp", 0x13b5, "OpenGLInterface::UnlockVertexBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = *eax
    void* ecx_1 = data_307882c
    
    if (*(ecx_1 + 0x4090) != eax_1)
        *(ecx_1 + 0x4090) = eax_1
        data_307943c(0x8892, eax_1)
        void* eax_2 = data_27e7fe4
        *(eax_2 + 0xc) += 1
    
    data_3079a10(0x8892, 0, arg3)
    char result = data_3079480(0x8892)
    
    if (result != 0)
        return result
    
    sub_4c5870("result", &data_83f3d3, "OpenGLGraphics.cpp", 0x13dc, 
        "OpenGLInterface::UnlockVertexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
