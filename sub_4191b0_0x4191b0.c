// 函数名称: sub_4191b0
// 虚拟地址: 0x4191b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4191b0()
{
    // 第一条实际指令: void** i = &data_8c6d0c
    void** i = &data_8c6d0c
    int32_t* ebx_1 = *(data_27e7a40 + 0x548) + 0x14
    int32_t result
    
    do
        int32_t eax = sub_4f6f00(**i)
        int16_t top = top - 1
        unimplemented  {call 0x4f6f00}
        *ebx_1 = eax
        *(sub_4fc3d0(&data_be1cb8, eax) + 0x2c) = sub_4191a0
        int32_t eax_3 = sub_4f5220(**i, "textTitle")
        void* ecx_3 = *i
        i[1] = eax_3
        i[2] = sub_4f5220(*ecx_3, "textBody")
        result = sub_4f5220(**i, "textAction")
        i[3] = result
        i = &i[6]
        ebx_1 = &ebx_1[1]
    while (i s< &data_8c6e2c)
    
    return result
}
