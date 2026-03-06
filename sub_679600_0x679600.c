// 函数名称: sub_679600
// 虚拟地址: 0x679600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_679600(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = arg2
    int32_t i = arg2
    int32_t* edi = arg1
    int32_t* result = edi[6]
    arg1 = result
    
    if (i s> 0)
        if (i s> result[1])
            do
                int32_t* esi_1 = edi[6]
                i -= result[1]
                uint32_t eax_1 = sub_5a9cf0(esi_1[8], 1, 0x1000, esi_1[7])
                
                if (eax_1 == 0)
                    if (esi_1[9] != eax_1)
                        *(*edi + 0x14) = 0x2a
                        (**edi)(edi)
                    
                    *(*edi + 0x14) = 0x78
                    (*(*edi + 4))(edi, 0xffffffff)
                    *esi_1[8] = 0xff
                    *(esi_1[8] + 1) = 0xd9
                    eax_1 = 2
                
                int32_t ecx_4 = esi_1[8]
                esi_1[1] = eax_1
                *esi_1 = ecx_4
                esi_1[9] = 0
                result = arg1
            while (i s> arg1[1])
        
        *result += i
        result[1] -= i
    
    return result
}
