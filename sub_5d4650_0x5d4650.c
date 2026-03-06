// 函数名称: sub_5d4650
// 虚拟地址: 0x5d4650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* constsub_5d4650(int32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_edi = 0x320
    int32_t __saved_edi = 0x320
    void* result_6 = sub_5d0ac0()
    void* const result = result_6
    
    if (result == 0)
        sub_5cd050(result_6)
        return 0
    
    int32_t __saved_edi_2 = 0x320
    int32_t var_10 = 0
    void* const result_1 = result
    sub_5cd100()
    *(result + 8) = 0xffffffff
    
    if (arg2 != 0)
        int32_t eax_2 = sub_5cd390(arg2)
        *(result + 0x318) = eax_2
        
        if (eax_2 == 0)
            sub_5cd050(eax_2)
            void* const result_2 = result
            sub_5d0af0()
            return 0
    
    int32_t var_10_1 = 0x10
    int32_t* eax_4 = sub_5d0ac0()
    
    if (eax_4 == 0)
        sub_5cd050(0)
        int32_t eax_5 = *(result + 0x318)
        
        if (eax_5 != 0)
            int32_t var_10_2 = eax_5
            sub_5d0af0()
        
        void* const result_3 = result
        sub_5d0af0()
        return 0
    
    *eax_4 = arg1
    eax_4[1] = arg3
    eax_4[2] = result
    void** eax_8
    uint32_t ecx_1
    int32_t edx
    eax_8, ecx_1, edx = sub_5dac50(0)
    eax_4[3] = eax_8
    
    if (eax_8 == 0)
        int32_t eax_9 = *(result + 0x318)
        
        if (eax_9 != 0)
            int32_t var_10_3 = eax_9
            sub_5d0af0()
        
        void* const result_4 = result
        sub_5d0af0()
        int32_t* var_14 = eax_4
        sub_5d0af0()
        return 0
    
    if (sub_5d41b0(eax_8, edx, ecx_1, result, eax_4) s< 0)
        int32_t eax_12 = *(result + 0x318)
        
        if (eax_12 != 0)
            int32_t var_10_6 = eax_12
            sub_5d0af0()
        
        void* const result_5 = result
        sub_5d0af0()
        result = nullptr
    else
        sub_5dad50(eax_4[3])
    
    sub_5dacb0(eax_4[3])
    int32_t* var_14_2 = eax_4
    sub_5d0af0()
    return result
}
