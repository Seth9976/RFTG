// 函数名称: sub_446100
// 虚拟地址: 0x446100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_446100(void* arg1 @ edi)
{
    // 第一条实际指令: void* eax = sub_46b2b0(*(data_27e7a40 + 0x74))
    void* eax = sub_46b2b0(*(data_27e7a40 + 0x74))
    int32_t edx = *(eax + 0x550)
    int32_t ecx = 0
    void* result
    
    if (edx s> 0)
        result = eax + 0x30
        
        while (*result != *(arg1 + 0xac))
            ecx += 1
            result += 4
            
            if (ecx s>= edx)
                goto label_446136
    
    if (edx s<= 0 || ecx == 0xffffffff)
    label_446136:
        void* entry_ebx
        int32_t edx_1 = *(entry_ebx + 0x1a08)
        result = nullptr
        
        if (edx_1 s> 0)
            void* ecx_1 = entry_ebx + 0xaa4
            
            do
                if (*ecx_1 == *(arg1 + 0xac))
                    result.b = 1
                    return result
                
                result += 1
                ecx_1 += 4
            while (result s< edx_1)
    
    result.b = 0
    return result
}
