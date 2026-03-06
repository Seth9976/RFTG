// 函数名称: sub_4fa770
// 虚拟地址: 0x4fa770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4fa770(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* result = sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg1) + 4))
    int32_t* result = sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg1) + 4))
    int32_t* result_1 = result
    float i = 0f
    
    if (result_1[1] s> 0)
        int32_t ebx_1 = 0
        
        do
            result = *(*result_1 + ebx_1 + 0x2c)
            
            if ((arg2 & result) != 0 && result != 0xffffffff)
                int32_t var_14_1 = arg3
                result = sub_4fa4e0(arg1, i, arg3.b)
            
            i += 1
            ebx_1 += 0x118
        while (i s< result_1[1])
    
    return result
}
