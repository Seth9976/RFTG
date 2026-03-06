// 函数名称: sub_5d24e0
// 虚拟地址: 0x5d24e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d24e0(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t eax = sub_5d2340("SDL_DISKAUDIODELAY")
    int32_t eax = sub_5d2340("SDL_DISKAUDIODELAY")
    char* eax_2 = sub_5d23d0(arg2)
    int32_t var_18 = 0x10
    int32_t eax_3 = sub_5d0ac0()
    *(arg1 + 0xa0) = eax_3
    
    if (eax_3 == 0)
        sub_5cd050(eax_3)
        return 0xffffffff
    
    int32_t var_14_1 = 0x10
    int32_t var_18_1 = 0
    int32_t var_1c = eax_3
    sub_5cd100()
    *(*(arg1 + 0xa0) + 8) = *(arg1 + 0xc)
    int32_t eax_5
    
    if (eax == 0)
        eax_5 = 0x96
    else
        int32_t var_14_2 = eax
        eax_5 = sub_5cd570()
    
    *(*(arg1 + 0xa0) + 0xc) = eax_5
    **(arg1 + 0xa0) = sub_5dd900(eax_2, "wb")
    int32_t* eax_7 = *(arg1 + 0xa0)
    
    if (*eax_7 != 0)
        int32_t var_14_4 = eax_7[2]
        *(*(arg1 + 0xa0) + 4) = sub_5d0ac0()
        int32_t eax_10 = *(*(arg1 + 0xa0) + 4)
        
        if (eax_10 != 0)
            int32_t var_14_5 = *(arg1 + 0xc)
            uint32_t var_18_3 = zx.d(*(arg1 + 7))
            int32_t var_1c_1 = eax_10
            sub_5cd100()
            char* var_14_6 = eax_2
            sub_5a8559(&data_8b80d0, 
                "WARNING: You are using the SDL disk writer audio driver!\n Writing to file [%s].\n")
            return 0
    
    sub_5d2470(arg1)
    return 0xffffffff
}
