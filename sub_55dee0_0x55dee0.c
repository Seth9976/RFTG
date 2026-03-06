// 函数名称: sub_55dee0
// 虚拟地址: 0x55dee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __thiscallsub_55dee0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 
    
    uint32_t eax = zx.d(arg2.w)
    
    if (eax u>= *(arg1 + 0x44))
        return 
    
    uint32_t edi_1 = eax * 0x24c + *(arg1 + 0x40)
    
    if (*(edi_1 + 0x248) != arg2)
        return 
    
    if (*edi_1 != 0)
        sub_4c5870("bufferData->mBufferType == DX11BUFFER_VERTEX", &data_83f3d3, 
            "Windows\WindowsDx11.cpp", 0x1c6, "Dx11GraphicsInterface::ReleaseVertexBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* eax_3 = *(edi_1 + 0x18)
    (*(*eax_3 + 8))(eax_3)
    eax = *(arg1 + 0x4c)
    *(arg1 + 0x4c) = zx.d(*(edi_1 + 0x248))
    *(edi_1 + 0x248) = eax
    *(arg1 + 0x50) -= 1
}
