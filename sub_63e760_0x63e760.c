// 函数名称: sub_63e760
// 虚拟地址: 0x63e760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t* (* __fastcallsub_63e760(void* arg1))(void* arg1, int16_t* arg2, int32_t arg3, int32_t arg4, int16_t* arg5, void* arg6, char arg7, char arg8, char arg9, char arg10, int32_t arg11)
{
    // 第一条实际指令: uint32_t eax_9 = zx.d(*(arg1 + 9))
    uint32_t eax_9 = zx.d(*(arg1 + 9))
    
    if (eax_9 == 2)
        int32_t ecx = *(arg1 + 0xc)
        
        if (ecx == 0x7c00)
            return sub_637e10
        
        if (ecx == 0xf800)
            return sub_638ef0
        
        return sub_6368f0
    
    if (eax_9 != 4)
        return 0
    
    if (*(arg1 + 0xc) != 0xff0000)
        if (*(arg1 + 0x18) == 0)
            return sub_639ff0
        
        return sub_63b470
    
    if (*(arg1 + 0x18) == 0)
        return sub_63cb40
    
    return sub_63d8d0
}
