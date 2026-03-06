// 函数名称: sub_5b6879
// 虚拟地址: 0x5b6879
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b6879(int32_t* arg1 @ ebp)
{
    // 第一条实际指令: int32_t esp_7 = arg1[-6]
    int32_t esp_7 = arg1[-6]
    __getptd()[0x83] = 0
    void* esi = arg1[5]
    void* edi = arg1[3]
    int32_t ecx
    
    if (*(esi + 4) s> 0x80)
        ecx = *(edi + 8)
    else
        ecx = sx.d(*(edi + 8))
    
    int32_t ebx = *(esi + 0x10)
    arg1[-8] = 0
    
    while (true)
        int32_t eax_1 = arg1[-8]
        
        if (eax_1 u>= *(esi + 0xc))
            break
        
        int32_t eax_2 = eax_1 * 0x14
        int32_t edx_1 = *(eax_2 + ebx + 4)
        
        if (ecx s> edx_1 && ecx s<= *(eax_2 + ebx + 8))
            ecx = *(*(esi + 8) + (edx_1 << 3) + 8)
            break
        
        arg1[-8] += 1
    
    *(esp_7 - 4) = ecx
    *(esp_7 - 8) = esi
    *(esp_7 - 0xc) = 0
    *(esp_7 - 0x10) = edi
    sub_5b6582()
    arg1[-7] = 0
    arg1[-1] = 0
    int32_t* esi_1 = arg1[2]
    arg1[-1] = 0xfffffffe
    arg1[4] = 0
    sub_5b6906(arg1, esi_1, edi)
    int32_t result = arg1[-7]
    *(esp_7 - 4) = &data_5b68fa
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1[-4]
    *(esp_7 + 4)
    *(esp_7 + 8)
    *(esp_7 + 0xc)
    *arg1
    *arg1 = *(esp_7 - 4)
    *arg1
    return result
}
