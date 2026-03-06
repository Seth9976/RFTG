// 函数名称: sub_5c33e0
// 虚拟地址: 0x5c33e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c33e0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t ebx_2 = arg2 + arg4
        int32_t edi_2 = adc.d(arg3, arg5, arg2 + arg4 u< arg2)
        
        if (edi_2 u>= arg3 && (edi_2 u> arg3 || ebx_2 u>= arg2))
            int32_t* eax_2 = sub_5a881a(0x78)
            
            if (eax_2 == 0)
                zip_error_set(arg7, 0xe, eax_2)
                return 0
            
            *eax_2 = arg2
            eax_2[1] = arg3
            eax_2[2] = ebx_2
            eax_2[3] = edi_2
            zip_stat_init(&eax_2[6])
            zip_error_init(&eax_2[0x16])
            int32_t var_20 = 0xffffffff
            int32_t edi_4 = sub_5c1ec0(arg1) & 0x40ff
            int32_t eax_8
            int32_t edx_1
            eax_8, edx_1 = zip_source_make_command_bitmap(0xe, 7)
            int32_t eax_9 = eax_8 | edi_4
            eax_2[0x1a] = eax_9
            eax_2[0x1b] = edx_1
            char eax_12
            
            if ((eax_9 & 0x40) == 0)
                eax_12 = 0
            else
                eax_12 = 1
            
            eax_2[0x1c].b = eax_12
            
            if (arg6 != 0)
                int32_t* var_14_2 = arg7
                sub_5bf560(&eax_2[6], arg6)
            
            return sub_5c3990(arg1, sub_5c3090, eax_2, arg7)
    
    zip_error_set(arg7, 0x12, 0)
    return 0
}
