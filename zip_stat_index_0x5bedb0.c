// 函数名称: zip_stat_index
// 虚拟地址: 0x5bedb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_stat_index(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax_1 = sub_5bfc00(arg1, arg2, arg3, arg4, nullptr)
    
    if (eax_1 != 0)
        void* eax_3 = zip_get_name(arg1, arg2, arg3, arg4)
        
        if (eax_3 != 0)
            int32_t* eax_4
            
            if ((arg4.b & 8) == 0)
                eax_4 = *(*(arg1 + 0x40) + arg2 * 0x10 + 8)
            
            int32_t* esi_2
            
            if ((arg4.b & 8) != 0 || eax_4 == 0)
                esi_2 = arg5
                zip_stat_init(esi_2)
                esi_2[0xc] = *(eax_1 + 0x18)
                esi_2[6] = *(eax_1 + 0x28)
                esi_2[7] = *(eax_1 + 0x2c)
                esi_2[0xa] = *(eax_1 + 0x10)
                esi_2[0xb] = *(eax_1 + 0x14)
                esi_2[8] = *(eax_1 + 0x20)
                esi_2[9] = *(eax_1 + 0x24)
                int32_t eax_8
                eax_8.w = *(eax_1 + 0xc)
                esi_2[0xd].w = eax_8.w
                char eax_9 = (*(eax_1 + 0xa)).b
                
                if ((eax_9 & 1) == 0)
                    *(esi_2 + 0x36) = 0
                else if ((eax_9 & 0x40) == 0)
                    *(esi_2 + 0x36) = 1
                else
                    *(esi_2 + 0x36) = 0xffff
                
                *esi_2 = 0xfc
                esi_2[1] = 0
                goto label_5beeae
            
            esi_2 = arg5
            
            if (zip_source_stat(eax_4, esi_2) s>= 0)
            label_5beeae:
                *esi_2 |= 3
                esi_2[4] = arg2
                int32_t ecx_6 = esi_2[1]
                esi_2[2] = eax_3
                esi_2[5] = arg3
                esi_2[1] = ecx_6
                return 0
            
            zip_error_set(arg1 + 8, 0xf, 0)
    
    return 0xffffffff
}
