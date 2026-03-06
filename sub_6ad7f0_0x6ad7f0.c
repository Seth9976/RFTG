// 函数名称: sub_6ad7f0
// 虚拟地址: 0x6ad7f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6ad7f0()
{
    // 第一条实际指令: void* result = data_8c8744
    void* result = data_8c8744
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&data_8c8744)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            return sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    return result
}
