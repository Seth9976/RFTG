// 函数名称: sub_5c6230
// 虚拟地址: 0x5c6230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c6230(void* arg1, void* arg2, int16_t arg3, char arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    
    if (arg5 == 0 || arg2 == 0 || arg3 != 1)
        int32_t __saved_esi_1 = 0
        var_14 = 0x12
    else
        if ((arg4 & 1) == 0)
            int32_t* eax_3 = sub_5a881a(0x18)
            
            if (eax_3 == 0)
                zip_error_set(arg1 + 8, 0xe, eax_3)
                return nullptr
            
            zip_error_init(eax_3)
            char* eax_4 = arg5
            eax_3[3] = 0x12345678
            eax_3[4] = 0x23456789
            eax_3[5] = 0x34567890
            void* edx_1 = &eax_4[1]
            int32_t ecx_2
            
            do
                ecx_2.b = *eax_4
                eax_4 = &eax_4[1]
            while (ecx_2.b != 0)
            
            void* eax_5 = eax_4 - edx_1
            sub_5c5f10(eax_5, edx_1.w, ecx_2, eax_3, 0, arg5, eax_5, 0, 1)
            int32_t* result = sub_5c3a00(arg1, arg2, sub_5c60d0, eax_3)
            
            if (result != 0)
                return result
            
            __free_base(eax_3)
            return 0
        
        int32_t __saved_esi = 0
        var_14 = 0x18
    
    zip_error_set(arg1 + 8, var_14, 0)
    return 0
}
