// 函数名称: sub_62bbf0
// 虚拟地址: 0x62bbf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_62bbf0(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t eax = arg1[6]
    int32_t var_2c = 0xfefefe
    int64_t st2 = 0xfefefe.q
    int32_t i = arg1[7]
    int32_t* edx_1 = *arg1
    int32_t* result = arg1[5]
    int32_t ecx_1 = *(arg1[0xb] + 0x18)
    int32_t var_2c_1 = 0x10101
    int32_t var_2c_2 = ecx_1
    
    if (i != 0)
        arg1[4]
        arg1[9]
        
        do
            i -= 1
            int32_t ecx_6 = eax
            
            if ((eax & 1) != 0)
                int32_t ecx_7 = *result
                int32_t esi_2 = *edx_1
                *result = ((((ecx_7 & 0xfefefe) + (esi_2 & 0xfefefe)) u>> 1)
                    + (ecx_7 & esi_2 & 0x10101)) | ecx_1
                edx_1 = &edx_1[1]
                result = &result[1]
                ecx_6 = eax - 1
            
            int32_t j = ecx_6 s>> 1
            
            while (j s> 0)
                int64_t st0 = *result
                int64_t st1 = *edx_1
                *result = _m_paddd(st0 & st1 & 0x10101.q, _m_psrldi(_m_paddd(st1 & st2, st0 & st2), 1))
                    | ecx_1.q
                j -= 1
                result = &result[2]
                edx_1 = &edx_1[2]
            
            edx_1 = &edx_1[arg1[4] s>> 2]
            result = &result[arg1[9] s>> 2]
        while (i != 0)
    
    return result
}
