// 函数名称: sub_4102b0
// 虚拟地址: 0x4102b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4102b0(int32_t arg1 @ edi)
{
    // 第一条实际指令: sub_4075c0()
    sub_4075c0()
    void* ecx = data_27e7a40
    int32_t eax = *(ecx + 0x3188e4)
    int32_t result = 0
    
    if (eax s> 0)
        void* ecx_1 = ecx + 0x317ad4
        
        do
            if (*ecx_1 == arg1)
                sub_407670()
                return result
            
            result += 1
            ecx_1 += 0x3c
        while (result s< eax)
    
    sub_407670()
    return 0xffffffff
}
