// 函数名称: sub_60d480
// 虚拟地址: 0x60d480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_60d480(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t __saved_esi
    int32_t __saved_esi
    int32_t* esp = &__saved_esi
    int32_t var_8
    
    switch (arg1)
        case 0
            int32_t* esi_1 = *(arg3 + 8)
            int32_t ecx = *(*esi_1 + 0xe4)
            var_8 = 0
            ecx(esi_1, 0x1b, var_8)
            return 
        case 1
            int32_t* eax_2 = *(arg3 + 8)
            void* edx = *eax_2
            var_8 = 1
            (*(edx + 0xe4))(eax_2, 0x1b, var_8)
            int32_t* eax_4 = *(arg3 + 8)
            int32_t edx_1 = *(*eax_4 + 0xe4)
            var_8 = 5
            edx_1(eax_4, 0x13, var_8)
            int32_t* eax_5 = *(arg3 + 8)
            int32_t edx_2 = *(*eax_5 + 0xe4)
            var_8 = 6
            edx_2(eax_5, 0x14, var_8)
            esp = &__saved_esi
            
            if (*(arg3 + 0x50) != 0)
                int32_t* eax_6 = *(arg3 + 8)
                int32_t edx_3 = *(*eax_6 + 0xe4)
                var_8 = 2
                edx_3(eax_6, 0xcf, var_8)
                var_8 = 6
            label_60d57b:
                int32_t* esi_2 = *(arg3 + 8)
                (*(*esi_2 + 0xe4))(esi_2, 0xd0)
                esp = &var_8
        case 2
            int32_t* eax_7 = *(arg3 + 8)
            void* edx_4 = *eax_7
            var_8 = 1
            (*(edx_4 + 0xe4))(eax_7, 0x1b, var_8)
            int32_t* eax_9 = *(arg3 + 8)
            int32_t edx_5 = *(*eax_9 + 0xe4)
            var_8 = 5
            edx_5(eax_9, 0x13, var_8)
            var_8 = 2
        label_60d54e:
            int32_t* eax_13 = *(arg3 + 8)
            (*(*eax_13 + 0xe4))(eax_13, 0x14)
            esp = &__saved_esi
            
            if (*(arg3 + 0x50) != 0)
                int32_t* eax_14 = *(arg3 + 8)
                int32_t edx_9 = *(*eax_14 + 0xe4)
                var_8 = 1
                edx_9(eax_14, 0xcf, var_8)
                var_8 = 2
                goto label_60d57b
        case 4
            int32_t* eax_10 = *(arg3 + 8)
            void* edx_6 = *eax_10
            var_8 = 1
            (*(edx_6 + 0xe4))(eax_10, 0x1b, var_8)
            int32_t* eax_12 = *(arg3 + 8)
            int32_t edx_7 = *(*eax_12 + 0xe4)
            var_8 = 1
            edx_7(eax_12, 0x13, var_8)
            var_8 = 3
            goto label_60d54e
    
    *esp
}
