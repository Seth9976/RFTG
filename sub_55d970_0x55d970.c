// 函数名称: sub_55d970
// 虚拟地址: 0x55d970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55d970(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_563ea0(arg1 + 0x40, arg2)
    int32_t* eax = sub_563ea0(arg1 + 0x40, arg2)
    
    if (*eax != 0)
        sub_4c5870("bufferData->mBufferType == DX11BUFFER_VERTEX", &data_83f3d3, 
            "Windows\WindowsDx11.cpp", 0x12d, "Dx11GraphicsInterface::LockAppendVertexBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax[1].b == 0)
        sub_4c5870("bufferData->mDynamic", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x12e, 
            "Dx11GraphicsInterface::LockAppendVertexBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_c = 0
    int32_t var_8 = 0
    int32_t* eax_3 = *(arg1 + 0x10)
    int32_t var_10 = 0
    
    if ((*(*eax_3 + 0x38))(eax_3, eax[6], 0, 5, 0, &var_10) s>= 0)
        return eax[3] + var_10
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x132, 
        "Dx11GraphicsInterface::LockAppendVertexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
