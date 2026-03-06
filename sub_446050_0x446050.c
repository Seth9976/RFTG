// 函数名称: sub_446050
// 虚拟地址: 0x446050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_446050(void* arg1, void* arg2)
{
    // 第一条实际指令: void* result = sub_46b2b0(*(data_27e7a40 + 0x74))
    void* result = sub_46b2b0(*(data_27e7a40 + 0x74))
    int32_t edx = *(result + 0x550)
    int32_t ecx = 0
    
    if (edx s> 0)
        result += 0x30
        
        while (*result != *(arg2 + 0xac))
            ecx += 1
            result += 4
            
            if (ecx s>= edx)
                goto label_446096
    
    if (edx s<= 0 || ecx == 0xffffffff)
    label_446096:
        int32_t i = 0
        
        if (*(arg1 + 0x1a08) s> 0)
            void* edi_2 = arg1 + 0xaa4
            
            do
                if (*(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *edi_2) + 0x7c) == *(arg2 + 0x7c))
                    result.b = 1
                    return result
                
                i += 1
                edi_2 += 4
            while (i s< *(arg1 + 0x1a08))
    
    result.b = 0
    return result
}
