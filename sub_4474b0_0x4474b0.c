// 函数名称: sub_4474b0
// 虚拟地址: 0x4474b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4474b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_54
    int32_t* var_54
    int32_t eax_1 = __security_cookie ^ &var_54
    int32_t* edi = arg1
    var_54 = edi
    int32_t result = sub_445ef0(arg1, edi)
    
    if (result.b != 0)
        sub_4d6480(data_307bf78)
        void var_3c
        sub_4d66f0(&var_3c)
        void* eax_2 = data_27e7a40
        *(*(eax_2 + 0x548) + 0xbfac) = edi[0x2b]
        edi[0x1e] = fconvert.s(float.t(0))
        edi[0x25] = 1
        edi[0x26].b = 0
        *(edi + 0x99) = 0
        __builtin_memcpy(&edi[0xb], &edi[3], 0x20)
        void* ecx_2 = *(eax_2 + 0x548)
        *(ecx_2 + 0xd0) = 0x1010000
        *(ecx_2 + 0xd4) = 0
        void* ecx_3 = *(eax_2 + 0x548)
        *(ecx_3 + 0x178) = 0x1010000
        *(ecx_3 + 0x17c) = 0
        void* ecx_4 = *(eax_2 + 0x548)
        *(ecx_4 + 0xec) = 0x1010000
        *(ecx_4 + 0xf0) = 0
        void* ecx_5 = *(eax_2 + 0x548)
        *(ecx_5 + 0x10a) = 0x101
        *(ecx_5 + 0x108) = 0
        *(ecx_5 + 0x10c) = 0
        void* ecx_6 = *(eax_2 + 0x548)
        *(ecx_6 + 0x126) = 0x101
        *(ecx_6 + 0x124) = 0
        *(ecx_6 + 0x128) = 0
        void* ecx_7 = *(eax_2 + 0x548)
        *(ecx_7 + 0x142) = 0x101
        *(ecx_7 + 0x140) = 0
        *(ecx_7 + 0x144) = 0
        result = *(eax_2 + 0x548)
        *(result + 0x15e) = 0x101
        *(result + 0x15c) = 0
        *(result + 0x160) = 0
        
        if (*edi == 6)
            void* eax_4 = sub_418870(edi[0x23])
            int32_t ecx_8 = data_315fba4
            *(eax_4 + 0x78) = fconvert.s(float.t(0))
            data_315fba4 = ecx_8 + 1
            __builtin_memcpy(eax_4 + 0x2c, eax_4 + 0xc, 0x20)
            *(eax_4 + 0x58) = 0xffffffff
            *(eax_4 + 0x5c) = 0x19
            *(eax_4 + 0x60) = ecx_8
            bool cond:0_1 = *(eax_4 + 0x5c) != 1
            *(eax_4 + 0x99) = 0
            *(eax_4 + 0x50) = 0xffffffff
            *(eax_4 + 0x98) = 0
            *(eax_4 + 0x9c) = 0
            
            if (not(cond:0_1))
                *(eax_4 + 0x70) = 1
            
            void* eax_6 = sub_418870(var_54[0x24])
            int32_t ecx_11 = data_315fba4
            *(eax_6 + 0x78) = fconvert.s(float.t(0))
            data_315fba4 = ecx_11 + 1
            __builtin_memcpy(eax_6 + 0x2c, eax_6 + 0xc, 0x20)
            *(eax_6 + 0x58) = 0xffffffff
            *(eax_6 + 0x5c) = 0x1a
            *(eax_6 + 0x60) = ecx_11
            bool cond:1_1 = *(eax_6 + 0x5c) != 1
            *(eax_6 + 0x99) = 0
            *(eax_6 + 0x50) = 0xffffffff
            *(eax_6 + 0x98) = 0
            *(eax_6 + 0x9c) = 0
            
            if (not(cond:1_1))
                *(eax_6 + 0x70) = 1
            
            int32_t* eax_7 = var_54
            int32_t edx_4 = eax_7[0x24]
            int32_t var_64_2 = edx_4
            result = sub_46bde0(eax_7[0x23], edx_4)
    
    sub_5a6aba(eax_1 ^ &var_54)
    return result
}
