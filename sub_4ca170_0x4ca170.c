// 函数名称: sub_4ca170
// 虚拟地址: 0x4ca170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ca170(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    sub_5abfc0(ebx + 0x30, 0xff, 0x200)
    *(ebx + 0x24) = 0
    *(ebx + 0x28) = 0
    *(ebx + 0x2c) = 0
    int32_t* result = sub_4ccaa0(ebx + 0x24)
    
    if (*(ebx + 0x14) != 0)
        void* edi_1 = *(ebx + 0x18)
        void* i = nullptr
        arg1 = nullptr
        
        if (*(edi_1 + 0x10) s> 0)
            do
                result = *(*(edi_1 + 0x14) + i * 0x24)
                int32_t* result_1 = result
                
                if (result == 0)
                    result = *(edi_1 + 0xc) + i
                    result_1 = result
                
                if (result s>= 0x80)
                    result = sub_4ccb00(&result_1, &arg1)
                    i = arg1
                else
                    *(ebx + 0x30 + (result << 2)) = i
                
                i += 1
                arg1 = i
            while (i s< *(edi_1 + 0x10))
    
    return result
}
