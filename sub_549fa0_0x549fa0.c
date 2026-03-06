// 函数名称: sub_549fa0
// 虚拟地址: 0x549fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_549fa0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_54b850(arg1 + 0x4240, arg2)
    int32_t* eax = sub_54b850(arg1 + 0x4240, arg2)
    
    if (eax[0x4f].b != 0)
        sub_4c5870("!bufferData->mIsSharedBuffer", &data_83f3d3, "OpenGLGraphics.cpp", 0x1358, 
            "OpenGLInterface::LockVertexBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_2 = *eax
    void* ecx_1 = data_307882c
    
    if (*(ecx_1 + 0x4090) != eax_2)
        *(ecx_1 + 0x4090) = eax_2
        data_307943c(0x8892, eax_2)
        void* eax_3 = data_27e7fe4
        *(eax_3 + 0xc) += 1
    
    return data_3079a14(0x8892, 0, eax[2], 0x1a)
}
