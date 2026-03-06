// 函数名称: sub_4045b0
// 虚拟地址: 0x4045b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4045b0(int32_t arg1 @ edi)
{
    // 第一条实际指令: void* esi = data_27e7a40
    void* esi = data_27e7a40
    int32_t ecx = *(esi + 0x2c4958)
    int32_t eax = 0
    
    if (ecx s> 0)
        void* edx_1 = esi + 0xcac
        
        do
            if (*edx_1 == arg1)
                return eax
            
            eax += 1
            edx_1 += 0x1f8
        while (eax s< ecx)
    
    int32_t edx_2 = *(esi + 0x317ad0)
    int32_t eax_1 = 0
    
    if (edx_2 s> 0)
        void* ecx_1 = esi + 0x2c9224
        
        do
            if (*ecx_1 == arg1)
                return eax_1
            
            eax_1 += 1
            ecx_1 += 0x1f8
        while (eax_1 s< edx_2)
    
    int32_t var_c
    return var_c
}
