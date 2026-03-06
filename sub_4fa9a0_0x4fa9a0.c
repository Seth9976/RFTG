// 函数名称: sub_4fa9a0
// 虚拟地址: 0x4fa9a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4fa9a0(int32_t arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t* eax_1 = sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg1) + 4))
    int32_t i_2 = eax_1[1]
    
    if (i_2 s> 0)
        void* eax_3 = *eax_1 + 0x50
        int32_t i_1 = i_2
        int32_t i
        
        do
            if (*(eax_3 - 0x4c) == 6)
                int32_t result_1 = *(eax_3 - 4) + *eax_3
                
                if (result s<= result_1)
                    result = result_1
            
            eax_3 += 0x118
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
