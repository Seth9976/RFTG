// 函数名称: sub_55a240
// 虚拟地址: 0x55a240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __thiscallsub_55a240(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 
    
    uint32_t eax = zx.d(arg2.w)
    
    if (eax u>= *(arg1 + 0x88))
        return 
    
    uint32_t edi_1 = (eax << 4) + *(arg1 + 0x84)
    
    if (*(edi_1 + 0xc) != arg2)
        return 
    
    if (*(edi_1 + 4) != 1)
        sub_4c5870("bufferData->mBufferType == DXBUFFER_INDEX", &data_83f3d3, 
            "Windows\WindowsGraphics.cpp", 0x22f, "Dx9GraphicsInterface::ReleaseIndexBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* eax_3 = *edi_1
    (*(*eax_3 + 8))(eax_3)
    eax = *(arg1 + 0x90)
    *(arg1 + 0x90) = zx.d(*(edi_1 + 0xc))
    *(edi_1 + 0xc) = eax
    *(arg1 + 0x94) -= 1
}
