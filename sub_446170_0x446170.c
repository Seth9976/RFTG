// 函数名称: sub_446170
// 虚拟地址: 0x446170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_446170(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = sub_46b2b0(arg1)
    void* result = sub_46b2b0(arg1)
    int32_t i = 0
    void* result_1 = result
    
    if (*(result + 0x550) s> 0)
        void* edi_1 = result + 0x30
        
        do
            if (*(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *edi_1) + 0x80) == arg2)
                result.b = 1
                return result
            
            i += 1
            edi_1 += 4
        while (i s< *(result_1 + 0x550))
    
    result.b = 0
    return result
}
