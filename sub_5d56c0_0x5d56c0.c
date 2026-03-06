// 函数名称: sub_5d56c0
// 虚拟地址: 0x5d56c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d56c0(int32_t arg1)
{
    // 第一条实际指令: int32_t edx = arg1
    int32_t edx = arg1
    
    if (edx != 0)
        if (edx != data_bf7fa8)
            int32_t* ecx_1 = data_bf7fa4
            
            if (ecx_1 == 0)
                sub_5cce60("Cursor not associated with the current mouse")
                return 0xffffffff
            
            while (ecx_1 != edx)
                ecx_1 = *ecx_1
                
                if (ecx_1 == 0)
                    sub_5cce60("Cursor not associated with the current mouse")
                    return 0xffffffff
            
            if (ecx_1 == 0)
                sub_5cce60("Cursor not associated with the current mouse")
                return 0xffffffff
        
        data_bf7fac = edx
    else if (data_bf7f78 == 0)
        edx = data_bf7fa8
    else
        edx = data_bf7fac
    
    int32_t result
    
    if (edx == 0 || data_bf7fb0 == 0 || data_bf7f98 != 0)
        result = data_bf7f60
        
        if (result != 0)
            return result(0)
    else
        result = data_bf7f60
        
        if (result != 0)
            return result(edx)
    
    return result
}
