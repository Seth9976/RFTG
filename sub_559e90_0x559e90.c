// 函数名称: sub_559e90
// 虚拟地址: 0x559e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_559e90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_55d600(arg1 + 0x84, arg2)
    int32_t* eax = sub_55d600(arg1 + 0x84, arg2)
    
    if (eax[1] != 1)
        sub_4c5870("bufferData->mBufferType == DXBUFFER_INDEX", &data_83f3d3, 
            "Windows\WindowsGraphics.cpp", 0x18f, "Dx9GraphicsInterface::LockIndexBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ecx_1 = *eax
    int32_t edx = 0
    
    if (eax[2].b != 0)
        edx = 0x2000
    
    if ((*(*ecx_1 + 0x2c))(ecx_1, 0, 0, &arg2, edx) s>= 0)
        return arg2
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x19b, 
        "Dx9GraphicsInterface::LockIndexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
