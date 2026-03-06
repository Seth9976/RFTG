// 函数名称: sub_662280
// 虚拟地址: 0x662280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_662280(void* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    
    if ((*(result + 0x100) & 0x20000000) != 0)
        if ((*(result + 0x70) & 0x300) == 0x300)
            return result
        
        goto label_6622af
    
    if ((*(result + 0x70) & 0x800) == 0)
    label_6622af:
        int32_t edi_1 = arg3
        
        if (edi_1 != 0)
            result = *(result + 0x124)
            char* ebx_1 = arg2
            int32_t esi_1
            int32_t temp0_1
            
            do
                esi_1 = edi_1
                
                if (edi_1 == 0)
                    esi_1 = 0xffffffff
                
                result = sub_673170(result, ebx_1, esi_1)
                ebx_1 = &ebx_1[esi_1]
                temp0_1 = edi_1
                edi_1 -= esi_1
            while (temp0_1 != esi_1)
            *(arg1 + 0x124) = result
    
    return result
}
