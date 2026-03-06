// 函数名称: sub_609180
// 虚拟地址: 0x609180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_609180(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, char* arg6, void* arg7)
{
    // 第一条实际指令: void* esi = *(arg7 + 0x134)
    void* esi = *(arg7 + 0x134)
    
    if (arg2 == 0x824c)
        *(esi + 0xc) += 1
        int32_t var_14_1 = *(esi + 0xc) << 2
        int32_t var_18_1 = *(esi + 0x10)
        int32_t eax_2 = sub_5d0ae0()
        *(esi + 0x10) = eax_2
        
        if (eax_2 != 0)
            *(*(esi + 0x10) + (*(esi + 0xc) << 2) - 4) = sub_5cd390(arg6)
    
    int32_t eax_4 = *(esi + 0x14)
    
    if (eax_4 != 0)
        return eax_4(arg1, arg2, arg3, arg4, arg5, arg6, *(esi + 0x18))
    
    char* var_14_4 = arg6
    
    if (arg2 != 0x824c)
        return sub_5ce900(6, "%s")
    
    return sub_5ce940(6, "%s")
}
