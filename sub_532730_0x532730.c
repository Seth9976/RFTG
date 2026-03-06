// 函数名称: sub_532730
// 虚拟地址: 0x532730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_532730(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax_8 = *arg1
    int32_t eax_8 = *arg1
    
    if (eax_8 != 0)
        int32_t ecx
        
        if (eax_8 == 1)
            if (sub_4eb5a0(ecx, arg1[1]) != 0)
                sub_4eb650()
        else
            if (eax_8 != 2)
                sub_4c5870("Halt", &data_83f3d3, "Attachment.cpp", 0x3e, "AttachmentDestroy")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (sub_4e7b40(ecx, arg1[2]) != 0)
                sub_4e7bb0()
    
    void* eax_6 = data_27e7fcc
    
    if (eax_6 != 0)
        void* result = *(eax_6 + 0x34)
        int32_t ecx_1 = *(result + 0xc)
        *(result + 0xc) = zx.d(arg1[0xc].w)
        arg1[0xc] = ecx_1
        *(result + 0x10) -= 1
        return result
    
    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
