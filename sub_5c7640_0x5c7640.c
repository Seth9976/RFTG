// 函数名称: sub_5c7640
// 虚拟地址: 0x5c7640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c7640(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = data_8b95d0
    int32_t result = data_8b95d0
    
    if (result != 0)
        result = sub_5d1190(data_8b95cc)
        
        if (result == 0)
            int32_t* i_1 = data_8b95d8
            
            if (i_1 != 0)
                int32_t* i
                
                do
                    int32_t ecx_2 = *i_1
                    i = i_1[0x15]
                    
                    if (arg1 u<= ecx_2 && ecx_2 u<= arg2)
                        sub_5c7420(i_1)
                    
                    i_1 = i
                while (i != 0)
            
            return sub_5d11c0(data_8b95cc)
    
    return result
}
