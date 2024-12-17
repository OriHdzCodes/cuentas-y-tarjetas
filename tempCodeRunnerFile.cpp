            for (auto it = miscuentas.begin(); it != miscuentas.end();) {
                    if (it->getTarjeta().getNum_tarjeta() == num_tarjeta_a_eliminar) {
                        it = miscuentas.erase(it);
                    } else {
                        ++it;
                    }
                }
