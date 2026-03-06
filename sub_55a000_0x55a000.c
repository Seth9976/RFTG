// 函数名称: sub_55a000
// 虚拟地址: 0x55a000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55a000(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_55d600(arg1 + 0x84, arg2)
    int32_t* eax = sub_55d600(arg1 + 0x84, arg2)
    
    if (eax[1] != 1)
        sub_4c5870("bufferData->mBufferType == DXBUFFER_INDEX", &data_83f3d3, 
            "Windows\WindowsGraphics.cpp", 0x1bb, "Dx9GraphicsInterface::UnlockIndexBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_2 = *eax
    int32_t result = (*(*eax_2 + 0x30))(eax_2)
    
    if (result s>= 0)
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x1c0, 
        "Dx9GraphicsInterface::UnlockIndexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
