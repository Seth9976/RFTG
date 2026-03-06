// 函数名称: sub_682f70
// 虚拟地址: 0x682f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_682f70(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1cc)
    void* esi = *(arg1 + 0x1cc)
    int32_t* result = (**(arg1 + 4))(arg1, 1, 0x7fc) + 0x3fc
    *(esi + 0x28) = result
    int32_t edx_1 = 0
    int32_t i = 0
    int32_t edi = 0
    int32_t* result_1 = result
    
    do
        result[i] = edx_1
        *result_1 = edi
        i += 1
        result_1 -= 4
        edx_1 += 1
        edi -= 1
    while (i s< 0x10)
    
    if (i s< 0x30)
        void* esi_2 = result - (i << 2)
        
        do
            result[i] = edx_1
            *esi_2 = neg.d(edx_1)
            i += 1
            esi_2 -= 4
            edx_1 += not.d(i) & 1
        while (i s< 0x30)
    
    if (i s<= 0xff)
        int32_t ebx
        int32_t var_c_1 = ebx
        void* esi_4 = result - (i << 2)
        
        do
            result[i] = edx_1
            *esi_4 = neg.d(edx_1)
            i += 1
            esi_4 -= 4
        while (i s<= 0xff)
    
    return result
}
