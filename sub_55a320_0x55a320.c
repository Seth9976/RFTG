// 函数名称: sub_55a320
// 虚拟地址: 0x55a320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_55a320(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = &data_8bd388
    void* eax = &data_8bd388
    
    while (true)
        int32_t ecx = *eax
        
        if (ecx == 0 && *(eax + 4) == ecx)
            sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x26f, 
                "Dx9FormatFromTextureFormat")
            
            if (IsDebuggerPresent() != 1)
                noreturn sub_4c5a30() __tailcall
            
            breakpoint
        
        if (ecx == arg2)
            break
        
        eax += 8
    
    return *(eax + 4)
}
