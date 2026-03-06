// 函数名称: sub_46a500
// 虚拟地址: 0x46a500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_46a500(int32_t arg1, void* arg2 @ edi)
{
    // 第一条实际指令: void* var_40
    void* var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    void* ebx = sub_46b2b0(arg1)
    var_40 = ebx
    void* eax_3 = sub_46b2b0(arg1)
    int32_t edx = *(eax_3 + 0x550)
    
    if (edx s<= 0)
        goto label_46a554
    
    void* eax_4 = eax_3 + 0x30
    int32_t ecx = 0
    
    while (*eax_4 != *(arg2 + 0xac))
        ecx += 1
        eax_4 += 4
        
        if (ecx s>= edx)
            goto label_46a550
    
    if (ecx == 0xffffffff)
    label_46a550:
        ebx = var_40
    label_46a554:
        int32_t eax_5 = *(ebx + 0x550)
        *(ebx + 0x550) = eax_5 + 1
        void* ecx_2 = data_27e7a40
        *(ebx + (eax_5 << 2) + 0x30) = *(arg2 + 0xac)
        void* edx_2 = *(ecx_2 + 0x548)
        int32_t var_4c = *(arg2 + 0x7c)
        sub_46bde0(*(edx_2 + 0x2c080), edx_2)
    else
        int32_t var_4c_2 = arg1
        sub_46a330(ecx, edx)
        sub_46b410(arg2)
        ebx = var_40
    
    int32_t eax_8 = *(ebx + 0x550)
    
    if (eax_8 s> *(ebx + 0x558) || eax_8 s< *(ebx + 0x554))
        void* eax_12 = *(data_27e7a40 + 0x548)
        *(eax_12 + 0x210) = 0
        *(eax_12 + 0x2c078) = 1
        *(eax_12 + 0x214) = 0
        sub_5a6aba(eax_1 ^ &var_40)
        return eax_12
    
    void* eax_9 = data_27e7a40
    void* esi_1 = *(eax_9 + 0x548)
    
    if (*(esi_1 + 0x2c078) == 1 && *(esi_1 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        eax_9 = sub_4d66f0(&var_3c)
    
    *(esi_1 + 0x210) = 0
    *(esi_1 + 0x2c078) = 0
    *(esi_1 + 0x214) = 1
    sub_5a6aba(eax_1 ^ &var_40)
    return eax_9
}
