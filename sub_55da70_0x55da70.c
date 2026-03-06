// 函数名称: sub_55da70
// 虚拟地址: 0x55da70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55da70(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_563ea0(arg1 + 0x40, arg2)
    int32_t* eax = sub_563ea0(arg1 + 0x40, arg2)
    
    if (*eax != 1)
        sub_4c5870("bufferData->mBufferType == DX11BUFFER_INDEX", &data_83f3d3, 
            "Windows\WindowsDx11.cpp", 0x13a, "Dx11GraphicsInterface::LockIndexBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax[1].b == 0)
        sub_4c5870("bufferData->mDynamic", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x13b, 
            "Dx11GraphicsInterface::LockIndexBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_c = 0
    int32_t var_8 = 0
    int32_t* ecx_1 = *(arg1 + 0x10)
    int32_t result = 0
    
    if ((*(*ecx_1 + 0x38))(ecx_1, eax[6], 0, 4, 0, &result) s>= 0)
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x13f, 
        "Dx11GraphicsInterface::LockIndexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
