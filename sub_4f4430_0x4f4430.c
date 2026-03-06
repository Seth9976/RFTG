// 函数名称: sub_4f4430
// 虚拟地址: 0x4f4430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_4f4430(int32_t* arg1 @ eax, int32_t* arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: int32_t result = 0xffffffff
    int32_t result = 0xffffffff
    arg2[3] -= 1
    
    if (arg3 s<= 0x400 || arg2[4] != 0xffffffff)
        if (sub_4f4210(arg2, arg1) == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result = *arg2
        *arg1 = result
        *arg2 = arg1
    else if (arg1 != 0)
        return _aligned_free_base(arg1)
    
    return result
}
