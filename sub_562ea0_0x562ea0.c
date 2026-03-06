// 函数名称: sub_562ea0
// 虚拟地址: 0x562ea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __thiscallsub_562ea0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void var_3c
    void var_3c
    int32_t var_c = __security_cookie ^ &var_3c
    int32_t ebx
    int32_t var_40 = ebx
    int32_t esi
    int32_t var_44 = esi
    char** eax_2 = *(arg1 + 0x60)
    int32_t edi
    int32_t var_48 = edi
    void* eax_3 = sub_50ba10(eax_2)
    void* edx = data_3079204
    void* ecx
    
    if (eax_3 != 0)
        uint32_t ecx_1 = zx.d(eax_3.w)
        
        if (ecx_1 u< *(edx + 0x44))
            void* ecx_3 = ecx_1 * 0x24c + *(edx + 0x40)
            int32_t edx_1
            edx_1.b = *(ecx_3 + 0x248) != eax_3
            ecx = ecx_3 & (edx_1 - 1)
        else
            ecx = nullptr
    else
        ecx = nullptr
    
    long double x87_r6 = fconvert.t(255.0)
    float var_1c = fconvert.s(float.t(zx.d(arg2.b)) / x87_r6)
    float var_2c = fconvert.s(float.t(zx.d(arg2:1.b)) / x87_r6)
    long double x87_r6_6 = float.t(zx.d(arg2:3.b))
    float var_14 = fconvert.s(float.t(zx.d(arg2:2.b)) / x87_r6)
    int32_t* eax_8 = *(arg1 + 0x10)
    float var_10 = fconvert.s(x87_r6_6 / x87_r6_6)
    (*(*eax_8 + 0xc8))(eax_8, *(ecx + 0x30), &var_1c)
    char** result = *(arg1 + 0x64)
    
    if (result != 0)
        void* eax_9 = sub_50ba10(result)
        void* edx_9 = data_3079204
        uint32_t ecx_5
        
        if (eax_9 != 0)
            ecx_5 = zx.d(eax_9.w)
        
        void* eax_10
        
        if (eax_9 == 0 || ecx_5 u>= *(edx_9 + 0x44))
            eax_10 = nullptr
        else
            void* ecx_7 = ecx_5 * 0x24c + *(edx_9 + 0x40)
            int32_t edx_10
            edx_10.b = *(ecx_7 + 0x248) != eax_9
            eax_10 = (edx_10 - 1) & ecx_7
        
        int32_t* esi_2 = *(arg1 + 0x10)
        void* ecx_8 = *esi_2
        void* var_5c_1 = ecx_8
        result = (*(ecx_8 + 0xd4))(esi_2, *(eax_10 + 0x24), 1, fconvert.s(float.t(1)), 0)
    
    sub_5a6aba(var_2c ^ &var_48)
    return result
}
