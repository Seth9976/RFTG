// 函数名称: sub_671a40
// 虚拟地址: 0x671a40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_671a40(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* edx = *arg2
    int32_t ebx = arg2[3]
    int32_t ecx
    ecx.b = arg2[1].b != 8
    int32_t* var_18 = arg2
    char* var_1c
    int32_t result = sub_670650(arg1, edx, &var_1c)
    
    if (result != 0)
        sub_66f010(arg1, result + ebx * ((ecx << 2) + 6) + 2)
        
        if (arg1 != 0)
            char* eax_4 = var_1c
            
            if (eax_4 != 0 && result != 0xffffffff)
                sub_666640(arg1, eax_4, result + 1)
                sub_662280(arg1, var_1c, result + 1)
            
            if (arg1 != 0)
                int32_t* edi_1 = var_18
                
                if (edi_1 != 0xfffffffc)
                    sub_666640(arg1, &edi_1[1], 1)
                    sub_662280(arg1, &edi_1[1], 1)
        
        int32_t* ecx_3 = var_18
        void* ebx_4 = ecx_3[2]
        
        if (ebx_4 u< ebx_4 + ecx_3[3] * 0xa)
            char* ebx_5 = ebx_4 + 4
            
            do
                uint8_t var_14
                
                if (ecx_3[1].b != 8)
                    uint32_t eax_10 = zx.d(*(ebx_5 - 4))
                    var_14 = (eax_10 u>> 8).b
                    char var_13_2 = eax_10.b
                    uint32_t eax_11 = zx.d(*(ebx_5 - 2))
                    uint8_t var_12_2 = (eax_11 u>> 8).b
                    char var_11_2 = eax_11.b
                    uint32_t eax_12 = zx.d(*ebx_5)
                    uint8_t var_10_2 = (eax_12 u>> 8).b
                    char var_f_2 = eax_12.b
                    uint32_t eax_13 = zx.d(*(ebx_5 + 2))
                    uint8_t var_e_1 = (eax_13 u>> 8).b
                    char var_d_1 = eax_13.b
                    uint32_t eax_14 = zx.d(*(ebx_5 + 4))
                    uint8_t var_c_1 = (eax_14 u>> 8).b
                    char var_b_1 = eax_14.b
                else
                    var_14 = ebx_5[0xfffffffc]
                    char var_13_1 = ebx_5[0xfffffffe]
                    char var_12_1 = *ebx_5
                    char var_11_1 = ebx_5[2]
                    uint32_t eax_9 = zx.d(*(ebx_5 + 4))
                    uint8_t var_10_1 = (eax_9 u>> 8).b
                    char var_f_1 = eax_9.b
                
                if (arg1 != 0 && ecx << 2 != 0xfffffffa)
                    sub_666640(arg1, &var_14, (ecx << 2) + 6)
                    sub_662280(arg1, &var_14, (ecx << 2) + 6)
                    ecx_3 = var_18
                
                ebx_5 = &ebx_5[0xa]
            while (&ebx_5[0xfffffffc] u< ecx_3[2] + ecx_3[3] * 0xa)
        
        if (arg1 != 0)
            int32_t eax_18 = *(arg1 + 0x124)
            var_18.b = (eax_18 u>> 0x18).b
            var_18:1.b = (eax_18 u>> 0x10).b
            *(arg1 + 0x2ac) = 0x82
            var_18:2.b = (eax_18 u>> 8).b
            var_18:3.b = eax_18.b
            sub_666640(arg1, &var_18, 4)
        
        result = sub_666530(arg1, var_1c)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
